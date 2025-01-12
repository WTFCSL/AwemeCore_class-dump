//
//     Generated by private class-dump
//

@class AWEActivityDataModel;

@interface AWEActivityDataAdapter : NSObject {
    AWEActivityDataModel *_allPageModel;
    AWEActivityDataModel *_feedPageDataModel;
    AWEActivityDataModel *_detailPageDataModel;
}

@property (retain, nonatomic) AWEActivityDataModel *allPageModel;
@property (retain, nonatomic) AWEActivityDataModel *feedPageDataModel;
@property (retain, nonatomic) AWEActivityDataModel *detailPageDataModel;

+ (id)sharedInstance;

- (id)currentActivityDataModel;
- (void)handleRawData:(id)arg0 completion:(id /* block */)arg1;
- (void)cleanActivityDataModel;
- (id)detailPageActivityDataModel;
- (id)feedPageActivityDataModel;
- (void)setAllPageModel:(id)arg0;
- (id)allPageModel;
- (void)splitActivityDataModel;
- (BOOL)isShowInFeedPage:(id)arg0;
- (BOOL)isShowInDetailPage:(id)arg0;
- (void)setFeedPageDataModel:(id)arg0;
- (void)setDetailPageDataModel:(id)arg0;
- (id)feedPageDataModel;
- (id)detailPageDataModel;
- (void).cxx_destruct;

@end
