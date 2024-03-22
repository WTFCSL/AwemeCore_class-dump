//
//     Generated by private class-dump
//

@class NSString;

@interface HMDCrashHeaderInfo : HMDCrashModel {
    int _crashType;
    int _mach_type;
    int _signum;
    int _sigcode;
    unsigned long long _faultAddr;
    double _crashTime;
    NSString *_typeStr;
    long long _mach_code;
    long long _mach_subcode;
    NSString *_name;
    NSString *_reason;
}

@property (nonatomic) unsigned long long faultAddr;
@property (nonatomic) double crashTime;
@property (nonatomic) int crashType;
@property (copy, nonatomic) NSString *typeStr;
@property (nonatomic) int mach_type;
@property (nonatomic) long long mach_code;
@property (nonatomic) long long mach_subcode;
@property (nonatomic) int signum;
@property (nonatomic) int sigcode;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *reason;

- (void)setCrashTime:(double)arg0;
- (void)setFaultAddr:(unsigned long long)arg0;
- (void)setTypeStr:(id)arg0;
- (void)setCrashType:(int)arg0;
- (int)crashType;
- (void)setMach_type:(int)arg0;
- (void)setMach_code:(long long)arg0;
- (void)setMach_subcode:(long long)arg0;
- (int)mach_type;
- (long long)mach_code;
- (void)setSignum:(int)arg0;
- (int)signum;
- (unsigned long long)faultAddr;
- (void)setSigcode:(int)arg0;
- (double)crashTime;
- (long long)mach_subcode;
- (int)sigcode;
- (void)updateWithDictionary:(id)arg0;
- (void).cxx_destruct;
- (id)typeStr;
- (id)reason;
- (void)setName:(id)arg0;
- (void)setReason:(id)arg0;
- (id)name;

@end
