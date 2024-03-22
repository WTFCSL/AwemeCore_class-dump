//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface IESLiveEcOpenVideoPostEditerCommentsModel : IESLiveBridgeModel {
    NSString *_content;
    NSNumber *_contentCount;
    NSString *_orderID;
    NSArray *_photos;
    NSString *_productID;
    NSNumber *_rankGood;
    NSArray *_videos;
}

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *contentCount;
@property (copy, nonatomic) NSString *orderID;
@property (copy, nonatomic) NSArray *photos;
@property (copy, nonatomic) NSString *productID;
@property (retain, nonatomic) NSNumber *rankGood;
@property (copy, nonatomic) NSArray *videos;

+ (id)modelCustomPropertyMapper;

- (id)orderID;
- (void)setOrderID:(id)arg0;
- (id)rankGood;
- (void)setRankGood:(id)arg0;
- (id)productID;
- (void).cxx_destruct;
- (id)content;
- (void)setProductID:(id)arg0;
- (void)setContent:(id)arg0;
- (id)photos;
- (void)setPhotos:(id)arg0;
- (id)videos;
- (id)contentCount;
- (void)setContentCount:(id)arg0;
- (void)setVideos:(id)arg0;

@end
