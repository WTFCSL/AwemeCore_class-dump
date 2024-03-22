//
//     Generated by private class-dump
//

@class NSString;

@interface APCDTOGestureSupport : MTLModel <MTLJSONSerializing> {
    BOOL _tap;
    BOOL _pan;
    BOOL _pinch;
    BOOL _rotate;
}

@property (nonatomic) BOOL tap;
@property (nonatomic) BOOL pan;
@property (nonatomic) BOOL pinch;
@property (nonatomic) BOOL rotate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)pinch;
- (void)setPinch:(BOOL)arg0;
- (long long)supportOptions;
- (void)updateWithSupportOptions:(long long)arg0;
- (BOOL)pan;
- (id)init;
- (void)setPan:(BOOL)arg0;
- (BOOL)tap;
- (void)setTap:(BOOL)arg0;
- (BOOL)rotate;
- (void)setRotate:(BOOL)arg0;

@end
