//
//     Generated by private class-dump
//

@class NSString;

@interface AFDCloseFriendsMomentVideoTutorialButtonConfig : MTLModel <MTLJSONSerializing> {
    unsigned long long _buttonType;
    NSString *_buttonTitle;
    NSString *_buttonRoutePath;
}

@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *buttonRoutePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)buttonRoutePath;
- (void)setButtonRoutePath:(id)arg0;
- (unsigned long long)buttonType;
- (void).cxx_destruct;
- (id)buttonTitle;
- (void)setButtonType:(unsigned long long)arg0;
- (void)setButtonTitle:(id)arg0;

@end
