//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECShoppingGuideSUGModel : MTLModel <MTLJSONSerializing> {
    NSString *_sugID;
    NSString *_content;
    unsigned long long _type;
}

@property (copy, nonatomic) NSString *sugID;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)sugID;
- (void)setSugID:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)content;
- (void)setType:(unsigned long long)arg0;
- (void)setContent:(id)arg0;

@end