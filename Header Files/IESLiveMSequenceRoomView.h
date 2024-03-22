//
//     Generated by private class-dump
//

@class RACDisposable, NSString, HTSLiveMSequenceStore, IESLiveMSequenceAnchorItem, IESLiveMSequenceProgrammeView;

@interface IESLiveMSequenceRoomView : UIView <HTSLivePluginLayoutView> {
    HTSLiveMSequenceStore *_store;
    IESLiveMSequenceAnchorItem *_authorBtn;
    RACDisposable *_disposable;
    IESLiveMSequenceProgrammeView *_programmeView;
}

@property (retain, nonatomic) HTSLiveMSequenceStore *store;
@property (retain, nonatomic) IESLiveMSequenceAnchorItem *authorBtn;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) IESLiveMSequenceProgrammeView *programmeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateFollowStatus;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)setProgrammeView:(id)arg0;
- (id)programmeView;
- (void)updateUserData;
- (void)setFollowButtonHighlighted:(BOOL)arg0;
- (void)updateProgrammeContent:(id)arg0 countDownTime:(long long)arg1 countDownMsg:(id)arg2;
- (void)startAnchorViewAnimation:(id)arg0 duration:(long long)arg1 isMseqAudience:(BOOL)arg2;
- (void)programmeViewTapped;
- (void)pr_addObserve;
- (void)addCurrentView:(id)arg0;
- (id)authorBtn;
- (void)setAuthorBtn:(id)arg0;
- (id)initWithStore:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (id)viewType;
- (void)dealloc;
- (void)setupButtons;

@end