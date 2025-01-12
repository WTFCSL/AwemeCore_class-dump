//
//     Generated by private class-dump
//

@class NSString, NSData;
@protocol IESLiveRoomService;

@interface IESLiveGameOpenPlatformCryptor : NSObject <IESLiveGameOpenPlatformCryptorActions, IESLiveGameOpenPlatformCryptorInterface> {
    NSData *_aes128CryptorIV;
    NSString *_aes128CryptorKey;
    id<IESLiveRoomService> _room;
}

@property (readonly, copy, nonatomic) NSString *aes128IVSalt;
@property (readonly, copy, nonatomic) NSData *aes128CryptorIV;
@property (readonly, copy, nonatomic) NSString *aes128CryptorKey;
@property (readonly, copy, nonatomic) NSString *aes128CryptorKeySalt;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)arg0 DIContext:(id)arg1;
- (void)didUpdateAES128CryptKey:(id)arg0;
- (id)aes128IVSalt;
- (id)_generateAES128IVWithSalt:(id)arg0 roomID:(id)arg1;
- (id)_generateMD5WithAES128IV:(id)arg0;
- (id)aes128CryptorKey;
- (id)aes128CryptorKeySalt;
- (id)aes128CryptorIV;
- (id)_aes128DecryptWithCipher:(id)arg0 cryptKey:(id)arg1 cryptKeySalt:(id)arg2 IV:(id)arg3;
- (BOOL)isAES128CryptKeyAvailable;
- (id)aes128DecryptWithCipher:(id)arg0;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end
