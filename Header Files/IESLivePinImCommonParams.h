//
//     Generated by private class-dump
//

@class NSString, NSAttributedString, HTSLiveImage;

@interface IESLivePinImCommonParams : NSObject {
    BOOL _usePictureTextStyle;
    id _message;
    NSAttributedString *_contentAttr;
    NSAttributedString *_descAttr;
    HTSLiveImage *_imageIcon;
    NSString *_schema;
}

@property (retain, nonatomic) id message;
@property (nonatomic) BOOL usePictureTextStyle;
@property (copy, nonatomic) NSAttributedString *contentAttr;
@property (copy, nonatomic) NSAttributedString *descAttr;
@property (retain, nonatomic) HTSLiveImage *imageIcon;
@property (copy, nonatomic) NSString *schema;

- (void)setImageIcon:(id)arg0;
- (id)imageIcon;
- (BOOL)usePictureTextStyle;
- (void)setUsePictureTextStyle:(BOOL)arg0;
- (id)contentAttr;
- (void)setContentAttr:(id)arg0;
- (id)descAttr;
- (void)setDescAttr:(id)arg0;
- (void)setSchema:(id)arg0;
- (void)setMessage:(id)arg0;
- (void).cxx_destruct;
- (id)message;
- (id)schema;

@end
