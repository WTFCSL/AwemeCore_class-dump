//
//     Generated by private class-dump
//

@class AWEPOIDetailNGPageContext, NSString, AWEPOIFeedUgcListEmptyInfoModel;

@interface AWEPOIUGCRateListPageEmptyComponentViewModel : DitoComponentViewModel {
    BOOL _hasTrackedShow;
    AWEPOIFeedUgcListEmptyInfoModel *_emptyInfoModel;
    NSString *_creationIDForToComment;
}

@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (copy, nonatomic) NSString *creationIDForToComment;
@property (nonatomic) BOOL hasTrackedShow;
@property (retain, nonatomic) AWEPOIFeedUgcListEmptyInfoModel *emptyInfoModel;

- (BOOL)hasTrackedShow;
- (void)setHasTrackedShow:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)arg0;
- (void)bindStateAndAction;
- (void)componentViewDidCompleteShow;
- (id)trackingParams;
- (id)creationIDForToComment;
- (void)setCreationIDForToComment:(id)arg0;
- (void)postRefreshEventAfterDelay;
- (id)emptyInfoModel;
- (void)didTapWriteView;
- (void)setEmptyInfoModel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithNode:(id)arg0;

@end
