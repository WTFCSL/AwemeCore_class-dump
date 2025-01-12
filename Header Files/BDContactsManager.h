//
//     Generated by private class-dump
//

@class NSArray, BDContactsKit;

@interface BDContactsManager : NSObject {
    BDContactsKit *_contacts;
    NSArray *_localAddressModels;
}

@property (copy, nonatomic) NSArray *localAddressModels;
@property (retain, nonatomic) BDContactsKit *contacts;

+ (id)validatePhoneNumber:(id)arg0;

- (id)simplifyAddressBookModelFromContacts:(id)arg0;
- (void)uploadContactsWithContent:(id)arg0 needEncrypt:(long long)arg1 paramsDict:(id)arg2 requestUrl:(id)arg3 headerField:(id)arg4 localModels:(id)arg5 completion:(id /* block */)arg6;
- (void)loadContactsWithNameAndPhone:(id /* block */)arg0;
- (long long)contactsLimitCount;
- (id)contactsArrayFromContacts:(id)arg0;
- (id)updateKeyList:(id)arg0 needEncrypt:(long long)arg1;
- (void)updateLocalContactsWithKeyList:(id)arg0 localModels:(id)arg1;
- (id)localAddressModels;
- (void)setLocalAddressModels:(id)arg0;
- (BOOL)isDuplicate:(id)arg0 phoneNumber:(id)arg1;
- (void)uploadContactsWithRequestUrl:(id)arg0 needEncrypt:(long long)arg1 paramsDict:(id)arg2 headerField:(id)arg3 completion:(id /* block */)arg4;
- (id)localContactsModels;
- (id)contacts;
- (void)setContacts:(id)arg0;
- (void).cxx_destruct;

@end
