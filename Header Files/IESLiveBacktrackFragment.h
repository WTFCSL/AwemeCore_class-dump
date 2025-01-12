//
//     Generated by private class-dump
//

@class AnchorBackRecordData, UIView, IESLiveBacktrackProgressView, IESLiveRoomMQEventReportApi, HTSLiveToolbarItem, NSString, HTSLiveBackRecordVideoMessage, IESLiveBacktrackApi, NSOperationQueue, NSTimer, UIImage, IESLiveScreenRecordPublishView;
@protocol IESLivePublishMediaService, IESLiveAnchorBacktrackPreferenceService, IESLiveBubbleGuide;

@interface IESLiveBacktrackFragment : IESLiveRoomComponent <IESLiveBacktrackRouter, HTSLiveMessageSubscriber> {
    BOOL _backtrackAllowed;
    BOOL _isSavingDraft;
    BOOL _isSavingAlbum;
    id<IESLiveAnchorBacktrackPreferenceService> _backtrackPreference;
    id<IESLivePublishMediaService> _publishMediaService;
    UIView<IESLiveBubbleGuide> *_tipView;
    IESLiveScreenRecordPublishView *_backtrackFinishedView;
    IESLiveBacktrackProgressView *_backtrackProgressView;
    IESLiveRoomMQEventReportApi *_eventReportApi;
    unsigned long long _startTime;
    unsigned long long _recordTime;
    HTSLiveToolbarItem *_backtrackItem;
    IESLiveBacktrackApi *_backtrackApi;
    AnchorBackRecordData *_recordData;
    NSString *_cancelExecutionId;
    HTSLiveBackRecordVideoMessage *_message;
    NSOperationQueue *_downloadQueue;
    NSTimer *_timer;
    NSTimer *_progressTimer;
    UIImage *_snapshotImage;
    NSString *_mp4URL;
    unsigned long long _backtrackStatus;
    unsigned long long _recordStatus;
}

@property (retain, nonatomic) id<IESLiveAnchorBacktrackPreferenceService> backtrackPreference;
@property (retain, nonatomic) id<IESLivePublishMediaService> publishMediaService;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipView;
@property (retain, nonatomic) IESLiveScreenRecordPublishView *backtrackFinishedView;
@property (retain, nonatomic) IESLiveBacktrackProgressView *backtrackProgressView;
@property (retain, nonatomic) IESLiveRoomMQEventReportApi *eventReportApi;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long recordTime;
@property (retain, nonatomic) HTSLiveToolbarItem *backtrackItem;
@property (retain, nonatomic) IESLiveBacktrackApi *backtrackApi;
@property (retain, nonatomic) AnchorBackRecordData *recordData;
@property (copy, nonatomic) NSString *cancelExecutionId;
@property (retain, nonatomic) HTSLiveBackRecordVideoMessage *message;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (copy, nonatomic) NSString *mp4URL;
@property (nonatomic) BOOL backtrackAllowed;
@property (nonatomic) unsigned long long backtrackStatus;
@property (nonatomic) unsigned long long recordStatus;
@property (nonatomic) BOOL isSavingDraft;
@property (nonatomic) BOOL isSavingAlbum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRecordTime:(unsigned long long)arg0;
- (unsigned long long)recordTime;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (BOOL)backtrackAllowed;
- (void)setBacktrackAllowed:(BOOL)arg0;
- (id)backtrackPreference;
- (void)setBacktrackPreference:(id)arg0;
- (id)generateBackRecordItem;
- (void)startBackRecord;
- (BOOL)isBackRecording;
- (id)anchorBackRecordIdentifier;
- (id)publishMediaService;
- (void)setPublishMediaService:(id)arg0;
- (void)setupRACObservr;
- (unsigned long long)backtrackStatus;
- (id)backtrackFinishedView;
- (void)setMp4URL:(id)arg0;
- (void)addBacktrackItem;
- (id)cancelExecutionId;
- (void)backtrackSuccessed:(BOOL)arg0;
- (void)showPublicPanel:(id)arg0 isWidget:(BOOL)arg1;
- (BOOL)isSavingDraft;
- (BOOL)isSavingAlbum;
- (void)setBacktrackStatus:(unsigned long long)arg0;
- (id)backtrackApi;
- (void)addProgressAnimation;
- (void)setIsSavingAlbum:(BOOL)arg0;
- (void)operationSuccessed:(BOOL)arg0;
- (void)reportBacktrackFailured:(id)arg0;
- (void)downloadTses:(id)arg0 type:(id)arg1 completion:(id /* block */)arg2;
- (void)setIsSavingDraft:(BOOL)arg0;
- (void)reportSaveDraftSuccessfulEvent;
- (void)cancelBacktrack;
- (void)backtrackDone;
- (void)setCancelExecutionId:(id)arg0;
- (void)setBacktrackFinishedView:(id)arg0;
- (id)backtrackProgressView;
- (id)mp4URL;
- (void)createBacktrackFileDirectory;
- (void)downloadFailure:(id)arg0;
- (void)draftButtonDidTap;
- (void)downloadButtonDidTapWithPrivacyCert:(id)arg0;
- (void)cancelButtonDidTap;
- (void)setupBacktrackingPanelUI;
- (id)backRecordEntryImageName;
- (void)showBacktrackItemDot:(BOOL)arg0;
- (void)setBacktrackItem:(id)arg0;
- (id)backtrackItem;
- (void)backtrackItemDidTap;
- (void)removeProgressAnimation;
- (id)screenshotImageWithView:(id)arg0 imageSize:(struct CGSize { double x0; double x1; })arg1 imageScale:(double)arg2;
- (id)eventReportApi;
- (void)setBacktrackProgressView:(id)arg0;
- (void)setEventReportApi:(id)arg0;
- (void)setBacktrackApi:(id)arg0;
- (void)setMessage:(id)arg0;
- (id)timer;
- (id)snapshotImage;
- (void)setStartTime:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)message;
- (void)setup;
- (void)setRecordData:(id)arg0;
- (void)setDownloadQueue:(id)arg0;
- (void)setTimer:(id)arg0;
- (unsigned long long)startTime;
- (void)setSnapshotImage:(id)arg0;
- (id)downloadQueue;
- (id)recordData;
- (void)messageReceived:(id)arg0;
- (unsigned long long)recordStatus;
- (void)setRecordStatus:(unsigned long long)arg0;
- (id)tipView;
- (void)setTipView:(id)arg0;
- (id)progressTimer;
- (void)setProgressTimer:(id)arg0;

@end
