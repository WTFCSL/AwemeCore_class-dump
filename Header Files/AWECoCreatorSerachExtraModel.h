//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWECoCreatorSerachExtraModel : MTLModel <MTLJSONSerializing> {
    NSString *_logID;
    NSNumber *_now;
}

@property (copy, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *now;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)now;
- (void).cxx_destruct;
- (void)setNow:(id)arg0;
- (id)logID;
- (void)setLogID:(id)arg0;

@end
