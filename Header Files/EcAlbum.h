//
//     Generated by private class-dump
//

@class NSString, EcAsset, EcClient;

@interface EcAlbum : NSObject {
    BOOL _isDeleted;
    long long _albumId;
    NSString *_name;
    unsigned long long _createdAt;
    unsigned long long _updateAt;
    EcAsset *_cover;
    EcClient *_client;
}

@property (class, readonly, nonatomic) long long FROM_CAMERA;

@property (nonatomic) long long albumId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) EcAsset *cover;
@property (nonatomic) unsigned long long createdAt;
@property (nonatomic) unsigned long long updateAt;
@property (nonatomic) BOOL isDeleted;
@property (weak, nonatomic) EcClient *client;

+ (long long)FROM_CAMERA;

- (id)cover;
- (void)setCover:(id)arg0;
- (void)setAlbumId:(long long)arg0;
- (void)setUpdateAt:(unsigned long long)arg0;
- (long long)albumId;
- (id)initWithTag:(id)arg0 client:(id)arg1;
- (id)initWithAlbumId:(long long)arg0 deleted:(BOOL)arg1;
- (BOOL)isFromCamera;
- (unsigned long long)updateAt;
- (id)initWithTagModel:(id)arg0 client:(id)arg1;
- (void).cxx_destruct;
- (void)setClient:(id)arg0;
- (void)setCreatedAt:(unsigned long long)arg0;
- (id)client;
- (void)setName:(id)arg0;
- (void)setIsDeleted:(BOOL)arg0;
- (BOOL)isDeleted;
- (unsigned long long)createdAt;
- (id)name;

@end