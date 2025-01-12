//
//     Generated by private class-dump
//

@class UIFont, UIColor, NSString, UIImage;

@interface IESECAttributedAttachmentGenerator : NSObject <IESECAttributedGeneratorProtocol> {
    UIImage *_contentImage;
    double _scaleFitWidth;
    double _scaleFitHeight;
    UIFont *_alignFont;
    double _cornerRounds;
    UIColor *_imageTintColor;
    long long _vAlignment;
    struct CGSize { double width; double height; } _attachmentSize;
}

@property (readonly, copy, nonatomic) id /* block */ placeholder;
@property (retain, nonatomic) UIImage *contentImage;
@property (nonatomic) struct CGSize { double width; double height; } attachmentSize;
@property (nonatomic) double scaleFitWidth;
@property (nonatomic) double scaleFitHeight;
@property (retain, nonatomic) UIFont *alignFont;
@property (nonatomic) double cornerRounds;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (nonatomic) long long vAlignment;
@property (readonly, copy, nonatomic) id /* block */ image;
@property (readonly, copy, nonatomic) id /* block */ size;
@property (readonly, copy, nonatomic) id /* block */ fitHeight;
@property (readonly, copy, nonatomic) id /* block */ fitWidth;
@property (readonly, copy, nonatomic) id /* block */ roundCorners;
@property (readonly, copy, nonatomic) id /* block */ alignToFont;
@property (readonly, copy, nonatomic) id /* block */ tintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)fitHeight;
- (id /* block */)roundCorners;
- (id /* block */)alignToFont;
- (id)generateAttributedString;
- (id)generateAsyncAttributedContent;
- (void)setScaleFitWidth:(double)arg0;
- (void)setScaleFitHeight:(double)arg0;
- (void)setCornerRounds:(double)arg0;
- (void)setAlignFont:(id)arg0;
- (double)scaleFitHeight;
- (double)scaleFitWidth;
- (id)alignFont;
- (double)cornerRounds;
- (id /* block */)fitWidth;
- (id)imageTintColor;
- (id)contentImage;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)image;
- (id /* block */)tintColor;
- (void)setImageTintColor:(id)arg0;
- (id /* block */)size;
- (id /* block */)placeholder;
- (struct CGSize { double x0; double x1; })attachmentSize;
- (void)setContentImage:(id)arg0;
- (void)setAttachmentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setVAlignment:(long long)arg0;
- (long long)vAlignment;

@end
