//
//     Generated by private class-dump
//

@class VsFeedItem, VsFeedExtra;

@interface AWELiveVSTabHotRecModel : NSObject {
    BOOL _isShowTracked;
    VsFeedItem *_feedItem;
    VsFeedExtra *_extra;
}

@property (retain, nonatomic) VsFeedItem *feedItem;
@property (retain, nonatomic) VsFeedExtra *extra;
@property (nonatomic) BOOL isShowTracked;

- (void)setExtra:(id)arg0;
- (BOOL)isShowTracked;
- (void)setIsShowTracked:(BOOL)arg0;
- (void).cxx_destruct;
- (id)extra;
- (void)setFeedItem:(id)arg0;
- (id)feedItem;

@end