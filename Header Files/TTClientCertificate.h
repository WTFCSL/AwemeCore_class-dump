//
//     Generated by private class-dump
//

@class NSArray, NSData;

@interface TTClientCertificate : NSObject {
    NSArray *_HostsList;
    NSData *_Certificate;
    NSData *_PrivateKey;
}

@property (copy, nonatomic) NSArray *HostsList;
@property (retain, nonatomic) NSData *Certificate;
@property (retain, nonatomic) NSData *PrivateKey;

- (id)HostsList;
- (void)setHostsList:(id)arg0;
- (id)Certificate;
- (id)PrivateKey;
- (void).cxx_destruct;
- (void)setCertificate:(id)arg0;
- (void)setPrivateKey:(id)arg0;

@end
