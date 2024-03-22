//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECKOLEvaluationViewControllerConfiguration : NSObject {
    BOOL _shopBinding;
    BOOL _hideHeader;
    NSString *_productID;
    NSString *_enterFrom;
    NSString *_clickVideoID;
    NSString *_videoIDs;
    NSString *_detailVideoID;
    NSDictionary *_trackerParams;
    NSString *_kolLynxUrl;
}

@property (copy, nonatomic) NSString *productID;
@property (nonatomic, getter=isShopBinding) BOOL shopBinding;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *clickVideoID;
@property (copy, nonatomic) NSString *videoIDs;
@property (copy, nonatomic) NSString *detailVideoID;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (nonatomic) BOOL hideHeader;
@property (copy, nonatomic) NSString *kolLynxUrl;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setTrackerParams:(id)arg0;
- (id)trackerParams;
- (id)kolLynxUrl;
- (void)setKolLynxUrl:(id)arg0;
- (BOOL)isShopBinding;
- (void)setShopBinding:(BOOL)arg0;
- (id)clickVideoID;
- (void)setClickVideoID:(id)arg0;
- (id)videoIDs;
- (void)setVideoIDs:(id)arg0;
- (id)detailVideoID;
- (void)setDetailVideoID:(id)arg0;
- (id)productID;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;
- (id)initWithProductID:(id)arg0;
- (void)setHideHeader:(BOOL)arg0;
- (BOOL)hideHeader;

@end
