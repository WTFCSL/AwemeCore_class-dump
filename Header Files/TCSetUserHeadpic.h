//
//     Generated by private class-dump
//

@class UIImage, NSString;

@interface TCSetUserHeadpic : TCAPIRequest {
    UIImage *_paramImage;
    NSString *_paramFileName;
}

@property (retain, nonatomic) UIImage *paramImage;
@property (retain, nonatomic) NSString *paramFileName;

+ (id)dictionary;

- (void)setParamImage:(id)arg0;
- (void)setParamFileName:(id)arg0;
- (id)paramImage;
- (id)paramFileName;
- (void).cxx_destruct;

@end