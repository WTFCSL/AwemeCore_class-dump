//
//     Generated by private class-dump
//

@class NSString, AWEPzDomainDataResponse;

@interface AWEPzDomainDataRequest : NSObject {
    NSString *_domainName;
    NSString *_dataHash;
    AWEPzDomainDataResponse *_response;
}

@property (copy, nonatomic) NSString *domainName;
@property (copy, nonatomic) NSString *dataHash;
@property (retain, nonatomic) AWEPzDomainDataResponse *response;

- (id)domainName;
- (id)dataHash;
- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (id)response;
- (void)setDomainName:(id)arg0;
- (id)description;
- (void)setDataHash:(id)arg0;

@end