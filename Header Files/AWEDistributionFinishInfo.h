//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEDistributionFinishInfo : MTLModel <MTLJSONSerializing> {
    NSString *_type;
    NSDictionary *_extra;
}

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void).cxx_destruct;
- (id)type;
- (id)extra;
- (void)setType:(id)arg0;

@end
