//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWERichAwemeGoodTrackInfo : NSObject <AWEGoodsBasicModelProtocol> {
    AWEAwemeModel *_model;
}

@property (weak, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL showCommentPopup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoWithModel:(id)arg0;

- (id)promotionID;
- (long long)promotionSource;
- (id)reliableImages;
- (id)sales;
- (id)currentFrameTypeString;
- (id)guideInfoArray;
- (id)currentImageModel;
- (id)price;
- (id)productID;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)title;
- (id)longTitle;

@end
