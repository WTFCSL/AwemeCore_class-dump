//
//     Generated by private class-dump
//

@class NSString;

@interface IESECListKitDemoProductTag : MTLModel <MTLJSONSerializing> {
    NSString *_content;
    long long _type;
}

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (long long)type;
- (id)content;
- (void)setType:(long long)arg0;
- (void)setContent:(id)arg0;

@end
