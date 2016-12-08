//
//  CameraPreviewViewController.h
//  VideoScope
//
//  Created by JS Products on 07/03/16.
//  Copyright © 2016  JS Products. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <AVFoundation/AVFoundation.h>
#import <AVKit/AVKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import "CustomToast.h"
@interface CameraPreviewViewController : UIViewController<AVAudioRecorderDelegate,UIScrollViewDelegate>{
    AVPlayer * liveVideoPlayer;
    
    AVPlayerItem *playerItem;
    
    BOOL isRecording;
    

    __weak IBOutlet UILabel *mesageLabel;
    //video writing
    
    NSMutableArray *numberOfScreenshots;
    
    NSURL *AudioURl, *VideoURL;
    
    CFAbsoluteTime      _timeOfFirstFrame;
    NSTimer*recordingTimerVideo;

    NSDate* startedAt;
    BOOL isProcessing;
    
    AVAudioRecorder *recorder;
    NSMutableArray * tempDetailsArray, *p2pPathDetails;
    NSString * audioOrVideo;
    UIBarButtonItem * cameraBtn;
    
    UIView * containerCiew;
    
    // new feature... extra step
    __weak IBOutlet UIButton *recordingButton;
}


@property (nonatomic,strong) IBOutlet UIScrollView *interfaceScrollView;
@property (nonatomic,strong) IBOutlet UIImageView *interfaceImage;


@property (nonatomic, strong) MPMoviePlayerController *videoController;
@property (nonatomic,strong) NSMutableData *receivedData;

@property (weak, nonatomic) IBOutlet UIView *bottomButtonView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicatorView;
@property (weak, nonatomic) IBOutlet UILabel *lblRecordingTime;
@property (weak, nonatomic) IBOutlet UIView *viewRecordingTime;

@property (atomic, strong)NSString *cameraURL;
@property (atomic, strong)NSString *cameraName;
@property (atomic, strong)NSString *folderName;



- (IBAction)actionResetButton:(id)sender;
- (IBAction)actionZoomIn:(id)sender;
- (IBAction)actionZoomOut:(id)sender;
- (IBAction)actionLeftRtate:(id)sender;
- (IBAction)actionRightRotate:(id)sender;
- (IBAction)moveImage:(UIPanGestureRecognizer*)recognizer;


// new feature.. extra step to record
- (IBAction)recordButtonAction:(id)sender;

@end
