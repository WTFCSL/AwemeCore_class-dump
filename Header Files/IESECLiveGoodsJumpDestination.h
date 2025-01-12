//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveGoodsJumpDestination : MTLModel <MTLJSONSerializing> {
    BOOL _skipCheck;
    long long _blankJumpDestination;
    long long _buttonJumpDestination;
}

@property (nonatomic) long long blankJumpDestination;
@property (nonatomic) long long buttonJumpDestination;
@property (nonatomic) BOOL skipCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)blankJumpDestination;
- (long long)buttonJumpDestination;
- (BOOL)skipCheck;
- (void)setBlankJumpDestination:(long long)arg0;
- (void)setButtonJumpDestination:(long long)arg0;
- (void)setSkipCheck:(BOOL)arg0;

@end
