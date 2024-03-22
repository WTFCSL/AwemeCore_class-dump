//
//     Generated by private class-dump
//

@class NSString, BDPCDDynamicCardCustomActionModel;

@interface BDPCDDynamicCardImgModel : BDPCDDynamicCardAtomicModel {
    NSString *_imgUrl;
    BDPCDDynamicCardCustomActionModel *_actionModel;
    struct CGSize { double width; double height; } _rawSize;
}

@property (copy, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *actionModel;
@property (nonatomic) struct CGSize { double width; double height; } rawSize;

- (id)imgUrl;
- (void)setImgUrl:(id)arg0;
- (void)setActionModel:(id)arg0;
- (id)actionModel;
- (struct CGSize { double x0; double x1; })imageDisplaySizeWithOriginalWidth:(double)arg0 imageOriginalSize:(struct CGSize { double x0; double x1; })arg1;
- (BOOL)imageModelValidate;
- (BOOL)isAutoWidth;
- (struct CGSize { double x0; double x1; })iamgeViewSizeWithOriginalWidth:(double)arg0;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg0;
- (void)setRawSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })rawSize;

@end
