//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOInstanceContextModel : MTLModel <MTLJSONSerializing> {
    NSString *_zipUri;
    NSString *_instanceId;
    unsigned long long _subMediaType;
}

@property (copy, nonatomic) NSString *zipUri;
@property (copy, nonatomic) NSString *instanceId;
@property (nonatomic) unsigned long long subMediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)zipUri;
- (void)setZipUri:(id)arg0;
- (unsigned long long)subMediaType;
- (void)setSubMediaType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)instanceId;
- (void)setInstanceId:(id)arg0;

@end
