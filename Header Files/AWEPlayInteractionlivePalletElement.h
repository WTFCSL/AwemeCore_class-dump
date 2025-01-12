//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol CMCLivePalletView;

@interface AWEPlayInteractionlivePalletElement : AWEPlayInteractionLeftElement {
    BOOL _hasRequestLiveInfo;
    UIView<CMCLivePalletView> *_livePalletView;
    NSString *_successStatus;
    NSString *_failReason;
}

@property (retain, nonatomic) UIView<CMCLivePalletView> *livePalletView;
@property (copy, nonatomic) NSString *successStatus;
@property (copy, nonatomic) NSString *failReason;
@property (nonatomic) BOOL hasRequestLiveInfo;

- (void)initializeElement;
- (void)updateLivePalletView;
- (void)updateHasRequestLiveInfo;
- (id)activateInfoWithData:(id)arg0;
- (void)layoutElementView;
- (void)splashDidClicked:(id)arg0;
- (void)setHasRequestLiveInfo:(BOOL)arg0;
- (id)livePalletView;
- (void)setSuccessStatus:(id)arg0;
- (BOOL)hasRequestLiveInfo;
- (void)onLivePalletClicked;
- (void)setLivePalletView:(id)arg0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)successStatus;
- (id)failReason;
- (void)setFailReason:(id)arg0;

@end
