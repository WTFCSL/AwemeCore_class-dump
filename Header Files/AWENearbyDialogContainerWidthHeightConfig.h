//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyDialogContainerWidthHeightConfig : MTLModel <MTLJSONSerializing> {
    long long _mode;
    long long _value;
}

@property (nonatomic) long long mode;
@property (nonatomic) long long value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (long long)value;
- (long long)mode;
- (void)setMode:(long long)arg0;
- (void)setValue:(long long)arg0;

@end
