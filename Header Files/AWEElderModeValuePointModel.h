//
//     Generated by private class-dump
//

@class NSString;

@interface AWEElderModeValuePointModel : MTLModel <MTLJSONSerializing> {
    NSString *_valueText;
    NSString *_valueIcon;
}

@property (readonly, copy, nonatomic) NSString *valueText;
@property (readonly, copy, nonatomic) NSString *valueIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)valueIcon;
- (void).cxx_destruct;
- (id)valueText;

@end