//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEVoiceOverConfigModel : MTLModel <MTLJSONSerializing> {
    NSArray *_data;
}

@property (copy, nonatomic) NSArray *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;

@end
