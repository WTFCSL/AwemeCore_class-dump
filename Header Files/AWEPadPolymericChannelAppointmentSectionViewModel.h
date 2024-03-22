//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEPLVPageContext;
@protocol AWEPLVSectionModelProtocol;

@interface AWEPadPolymericChannelAppointmentSectionViewModel : AWEPadPolymericChannelSlidableSectionViewModel <AWEPLVSectionViewModelProtocol> {
    BOOL _isSpringLiveBookingRequestOnAir;
    BOOL _isLimitedFreeRequestOnAir;
}

@property (nonatomic) BOOL isSpringLiveBookingRequestOnAir;
@property (nonatomic) BOOL isLimitedFreeRequestOnAir;
@property (retain, nonatomic) id<AWEPLVSectionModelProtocol> sectionModel;
@property (nonatomic) long long sectionIndex;
@property (readonly, nonatomic) BOOL canShow;
@property (nonatomic) BOOL enableNewArch;
@property (nonatomic) long long maxLines;
@property (copy, nonatomic) NSString *sectionName;
@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logPB;
@property (retain, nonatomic) AWEPLVPageContext *pageContext;
@property (retain, nonatomic) id sectionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (void)replaceByModels:(id)arg0;
- (void)trackEvent:(id)arg0 withExtraParams:(id)arg1;
- (void)triggerCollectionViewScrollToTop;
- (void)updateSectionTimeLine;
- (void)bookWithCardList;
- (void)setIsSpringLiveBookingRequestOnAir:(BOOL)arg0;
- (void)setIsLimitedFreeRequestOnAir:(BOOL)arg0;
- (void)updateSubscribeStatus;
- (void)trackPadAppointmentStatusWithEvent:(id)arg0 ExtraParams:(id)arg1;
- (void)filterSectionDataWithFilterMap:(id)arg0;
- (void)bookLivingIfLogin;
- (void)trackPadEpisodeOrderAllClick;
- (BOOL)isSpringLiveBookingRequestOnAir;
- (BOOL)isLimitedFreeRequestOnAir;

@end