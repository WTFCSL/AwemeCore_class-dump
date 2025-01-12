//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate, BDXPrefetchRequestModel;

@interface BDXPrefetchResult : NSObject <NSCoding> {
    BDXPrefetchRequestModel *_requestOrigin;
    NSDictionary *_header;
    NSDictionary *_response;
    NSDate *_requestBeginDate;
    NSString *_errorMessage;
}

@property (retain) BDXPrefetchRequestModel *requestOrigin;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSDictionary *response;
@property (retain, nonatomic) NSDate *requestBeginDate;
@property (copy, nonatomic) NSString *errorMessage;

- (void)setRequestBeginDate:(id)arg0;
- (id)requestBeginDate;
- (BOOL)_isExpiredTimestamp;
- (BOOL)_isExpiredMs;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (id)header;
- (id)response;
- (id)initWithCoder:(id)arg0;
- (void)setHeader:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg0;
- (id)requestOrigin;
- (void)setRequestOrigin:(id)arg0;

@end
