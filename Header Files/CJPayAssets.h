//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayAssets : JSONModel {
    NSString *_bgImage;
    NSString *_tipImage;
    NSString *_showImage;
}

@property (copy, nonatomic) NSString *bgImage;
@property (copy, nonatomic) NSString *tipImage;
@property (copy, nonatomic) NSString *showImage;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (void)setTipImage:(id)arg0;
- (id)tipImage;
- (void).cxx_destruct;
- (id)showImage;
- (void)setShowImage:(id)arg0;
- (void)setBgImage:(id)arg0;
- (id)bgImage;

@end
