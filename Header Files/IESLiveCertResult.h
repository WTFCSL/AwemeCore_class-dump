//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSError, NSNumber;

@interface IESLiveCertResult : NSObject {
    NSError *_error;
    NSNumber *_certStatus;
    NSNumber *_manualStatus;
    long long _ageRange;
    NSNumber *_remaidedTimes;
    NSString *_ticket;
    NSDictionary *_extraParams;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSNumber *certStatus;
@property (retain, nonatomic) NSNumber *manualStatus;
@property (nonatomic) long long ageRange;
@property (retain, nonatomic) NSNumber *remaidedTimes;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSDictionary *extraParams;

- (long long)ageRange;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)certStatus;
- (void)setCertStatus:(id)arg0;
- (id)manualStatus;
- (void)setManualStatus:(id)arg0;
- (void)setAgeRange:(long long)arg0;
- (id)remaidedTimes;
- (void)setRemaidedTimes:(id)arg0;
- (void).cxx_destruct;
- (void)setError:(id)arg0;
- (id)error;
- (id)ticket;
- (void)setTicket:(id)arg0;

@end
