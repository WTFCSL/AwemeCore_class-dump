//
//     Generated by private class-dump
//

@class NSString;

@interface AWEbrandNameItem : MTLModel <MTLJSONSerializing> {
    NSString *_brandName;
    long long _configStatus;
}

@property (copy, nonatomic) NSString *brandName;
@property (nonatomic) long long configStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)configStatus;
- (void)setConfigStatus:(long long)arg0;
- (void).cxx_destruct;
- (id)brandName;
- (void)setBrandName:(id)arg0;

@end
