//
//     Generated by private class-dump
//

@class NSString, IESLiveAnchorFansGroupShareConfig, HTSLiveToolbarItem, UIView, UIImageView;
@protocol IESLiveAnchorFansGroupShareProtocol, IESLiveWebPDecoder, HTSLiveToolbar, IESLiveBubbleGuide, IESLiveWebPPlayer, IESLiveRoomService, IESLiveShareService;

@interface IESLiveAnchorFansGroupShareIntegration : NSObject <IESLiveRevenueInteractAction> {
    UIView<IESLiveBubbleGuide> *_buddleGuideView;
    IESLiveAnchorFansGroupShareConfig *_fansGroupShareConfig;
    HTSLiveToolbarItem *_fansGroupShareItem;
    UIImageView<IESLiveWebPPlayer> *_fansGroupShareImageView;
    id<IESLiveWebPDecoder> _insertWebPDecoder;
    id<IESLiveWebPDecoder> _resumeWebPDecoder;
    id<IESLiveRoomService> _room;
    id<IESLiveShareService> _shareService;
    UIView<HTSLiveToolbar> *_toolbar;
    id<IESLiveAnchorFansGroupShareProtocol> _impler;
}

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveShareService> shareService;
@property (weak, nonatomic) UIView<HTSLiveToolbar> *toolbar;
@property (weak, nonatomic) id<IESLiveAnchorFansGroupShareProtocol> impler;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *buddleGuideView;
@property (retain, nonatomic) IESLiveAnchorFansGroupShareConfig *fansGroupShareConfig;
@property (retain, nonatomic) HTSLiveToolbarItem *fansGroupShareItem;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *fansGroupShareImageView;
@property (retain, nonatomic) id<IESLiveWebPDecoder> insertWebPDecoder;
@property (retain, nonatomic) id<IESLiveWebPDecoder> resumeWebPDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)shareService;
- (void)setShareService:(id)arg0;
- (void)startRevenueInteractWithScene:(unsigned long long)arg0;
- (void)endRevenueInteractWithScene:(unsigned long long)arg0;
- (void)noticePKDesirableTimeReached:(id)arg0;
- (id)fansGroupShareConfig;
- (void)insertFansGroupShareItem;
- (void)hideAllFansGroupShare;
- (id)fansGroupShareImageView;
- (void)setBuddleGuideView:(id)arg0;
- (void)resumeGrouopItem;
- (id)buddleGuideView;
- (id)impler;
- (id)fansGroupShareItem;
- (void)showFansGrouopShareBuddle;
- (id)urlWithString:(id)arg0;
- (void)endPKAndFansGroupShareRemove;
- (void)receivePKAndFansGroupShareReceived;
- (id)initWithRoom:(id)arg0 shareService:(id)arg1 toolBar:(id)arg2 shareImpler:(id)arg3;
- (void)reloadShareService:(id)arg0 toolBar:(id)arg1;
- (void)prepareLoadConfigInfo;
- (id)shareContentModelWithModel:(id)arg0 isShareFansGrouop:(BOOL)arg1;
- (void)setFansGroupShareConfig:(id)arg0;
- (void)setFansGroupShareItem:(id)arg0;
- (void)setFansGroupShareImageView:(id)arg0;
- (id)insertWebPDecoder;
- (void)setInsertWebPDecoder:(id)arg0;
- (id)resumeWebPDecoder;
- (void)setResumeWebPDecoder:(id)arg0;
- (void)setImpler:(id)arg0;
- (id)toolbar;
- (void).cxx_destruct;
- (void)clear;
- (void)setToolbar:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)settingDict;

@end
