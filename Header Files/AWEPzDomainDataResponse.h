//
//     Generated by private class-dump
//

@class AWEPzDomainModel;

@interface AWEPzDomainDataResponse : NSObject {
    long long _result;
    AWEPzDomainModel *_domainModel;
}

@property (nonatomic) long long result;
@property (retain, nonatomic) AWEPzDomainModel *domainModel;

- (id)domainModel;
- (void)setDomainModel:(id)arg0;
- (id)initWithResult:(long long)arg0 domainModel:(id)arg1;
- (void)setResult:(long long)arg0;
- (void).cxx_destruct;
- (long long)result;

@end
