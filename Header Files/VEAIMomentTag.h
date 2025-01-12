//
//     Generated by private class-dump
//

@class NSString;

@interface VEAIMomentTag : NSObject <WCTColumnCoding, NSCoding> {
    float _confidence;
    long long _identity;
    NSString *_name;
    long long _type;
}

@property (nonatomic) long long identity;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) float confidence;

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg0;

- (id)archivedWCTValue;
- (id)acc_tagInfoDict;
- (float)confidence;
- (void)setConfidence:(float)arg0;
- (void).cxx_destruct;
- (void)setIdentity:(long long)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (long long)identity;
- (id)initWithCoder:(id)arg0;
- (void)setName:(id)arg0;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (id)name;

@end
