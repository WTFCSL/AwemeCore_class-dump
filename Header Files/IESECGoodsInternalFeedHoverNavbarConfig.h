//
//     Generated by private class-dump
//

@class NSString;

@interface IESECGoodsInternalFeedHoverNavbarConfig : NSObject {
    BOOL _shouldDisplay;
    unsigned long long _type;
    NSString *_imageName;
    SEL _actionSel;
    NSString *_accessibilityName;
    struct CGSize { double width; double height; } _buttonSize;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *imageName;
@property (nonatomic) SEL actionSel;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (nonatomic) BOOL shouldDisplay;
@property (retain, nonatomic) NSString *accessibilityName;

- (SEL)actionSel;
- (void)setActionSel:(SEL)arg0;
- (void)setAccessibilityName:(id)arg0;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })buttonSize;
- (void)setButtonSize:(struct CGSize { double x0; double x1; })arg0;
- (id)accessibilityName;
- (BOOL)shouldDisplay;
- (void)setShouldDisplay:(BOOL)arg0;

@end
