//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface AWESmartPhoneConfig : NSObject {
    NSString *_adID;
    NSString *_logExtra;
    NSString *_phoneNumber;
    NSString *_creativeID;
    NSNumber *_instanceID;
    NSString *_phoneKey;
    NSString *_positionTag;
    NSDictionary *_gscenario;
    NSString *_mKey;
    NSString *_customField;
    unsigned long long _refer;
    NSDictionary *_extraInfo;
}

@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *creativeID;
@property (retain, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSString *phoneKey;
@property (copy, nonatomic) NSString *positionTag;
@property (copy, nonatomic) NSDictionary *gscenario;
@property (copy, nonatomic) NSString *mKey;
@property (copy, nonatomic) NSString *customField;
@property (nonatomic) unsigned long long refer;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void)setExtraInfo:(id)arg0;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setRefer:(unsigned long long)arg0;
- (void)setCreativeID:(id)arg0;
- (id)adID;
- (void)setAdID:(id)arg0;
- (unsigned long long)refer;
- (void)setMKey:(id)arg0;
- (void)setPhoneKey:(id)arg0;
- (id)phoneKey;
- (id)initWithOriginAdModel:(id)arg0;
- (void)setPositionTag:(id)arg0;
- (id)gscenario;
- (void)setGscenario:(id)arg0;
- (void)setCustomField:(id)arg0;
- (id)positionTag;
- (id)customField;
- (id)instanceID;
- (void).cxx_destruct;
- (void)setInstanceID:(id)arg0;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (id)extraInfo;
- (id)creativeID;
- (id)mKey;

@end
