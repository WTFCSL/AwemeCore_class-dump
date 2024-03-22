//
//     Generated by private class-dump
//

@class AWEGuestHomeHeaderModel, NSString, AWEGuestHomePageContext;

@interface AWEGuestHomeHeaderSectionViewModel : AWEBaseListSectionViewModel <AWEGuestModeMessage, NSObject> {
    BOOL _fetchSuccessFlag;
    AWEGuestHomeHeaderModel *_headerModel;
    AWEGuestHomePageContext *_pageContext;
    NSString *_translatedFollowingCount;
}

@property (retain, nonatomic) AWEGuestHomePageContext *pageContext;
@property (retain, nonatomic) AWEGuestHomeHeaderModel *headerModel;
@property (copy, nonatomic) NSString *translatedFollowingCount;
@property (nonatomic) BOOL fetchSuccessFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelWithModelsArray:(id)arg0 pageContext:(id)arg1;

- (void)fetchSectionData;
- (void)guestDidFinishFollowUser:(id)arg0 isUnfollow:(BOOL)arg1;
- (BOOL)fetchSuccessFlag;
- (void)calculateFollowingCount;
- (void)setTranslatedFollowingCount:(id)arg0;
- (void)setFetchSuccessFlag:(BOOL)arg0;
- (id)translatedFollowingCount;
- (void).cxx_destruct;
- (void)setup;
- (void)dealloc;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)setHeaderModel:(id)arg0;
- (id)headerModel;

@end