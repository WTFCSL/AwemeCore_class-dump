//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEPOIEventInfoItem : MTLModel <MTLJSONSerializing> {
    NSString *_event;
    NSArray *_androidOwner;
    NSArray *_iosOwner;
}

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSArray *androidOwner;
@property (copy, nonatomic) NSArray *iosOwner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)androidOwner;
- (id)validateOwnersIsString:(id)arg0;
- (void)setAndroidOwner:(id)arg0;
- (id)iosOwner;
- (void)setIosOwner:(id)arg0;
- (void)setEvent:(id)arg0;
- (id)event;
- (void).cxx_destruct;
- (BOOL)validate:(id *)arg0;

@end