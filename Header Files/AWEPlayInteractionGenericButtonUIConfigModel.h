//
//     Generated by private class-dump
//

@class AWEPlayInteractionGenericButtonAnimationModel, NSString, NSNumber;

@interface AWEPlayInteractionGenericButtonUIConfigModel : MTLModel <MTLJSONSerializing> {
    double _width;
    double _height;
    AWEPlayInteractionGenericButtonAnimationModel *_animation;
    double _marginLeft;
    double _marginRight;
    double _cornerRadius;
    NSString *_text;
    NSString *_icon;
    NSString *_buttonColor;
    NSString *_textColor;
    NSString *_schema;
    NSString *_eventType;
    NSNumber *_disabled;
    NSNumber *_hideIcon;
    double _iconWidth;
    double _iconHeight;
    double _iconInterval;
}

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) AWEPlayInteractionGenericButtonAnimationModel *animation;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginRight;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *buttonColor;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSNumber *disabled;
@property (retain, nonatomic) NSNumber *hideIcon;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (nonatomic) double iconInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (double)iconInterval;
- (void)setIconInterval:(double)arg0;
- (void)setSchema:(id)arg0;
- (id)disabled;
- (void)setDisabled:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (id)animation;
- (double)height;
- (void)setAnimation:(id)arg0;
- (void)setText:(id)arg0;
- (id)eventType;
- (double)cornerRadius;
- (void)setButtonColor:(id)arg0;
- (id)buttonColor;
- (void)setWidth:(double)arg0;
- (void)setIcon:(id)arg0;
- (id)text;
- (void)setTextColor:(id)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (double)iconWidth;
- (void)setCornerRadius:(double)arg0;
- (id)schema;
- (void)setEventType:(id)arg0;
- (id)textColor;
- (double)iconHeight;
- (void)setIconWidth:(double)arg0;
- (void)setIconHeight:(double)arg0;
- (void)setHideIcon:(id)arg0;
- (id)hideIcon;
- (double)marginRight;
- (void)setMarginRight:(double)arg0;
- (double)marginLeft;
- (void)setMarginLeft:(double)arg0;

@end
