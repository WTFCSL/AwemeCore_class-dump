//
//     Generated by private class-dump
//

@class NSString;

@interface BDPV1CookieModel : NSObject {
    long long _creation_utc;
    NSString *_domain;
    NSString *_name;
    NSString *_value;
    NSString *_path;
    long long _expires_utc;
    long long _is_secure;
    long long _is_httponly;
    long long _last_access_utc;
    long long _has_expires;
    long long _is_persistent;
}

@property long long creation_utc;
@property (retain) NSString *domain;
@property (retain) NSString *name;
@property (retain) NSString *value;
@property (retain) NSString *path;
@property long long expires_utc;
@property long long is_secure;
@property long long is_httponly;
@property long long last_access_utc;
@property long long has_expires;
@property long long is_persistent;

+ (id)buildFromSet:(id)arg0;
+ (id)buildFromCookie:(id)arg0;

- (void)setCreation_utc:(long long)arg0;
- (void)setExpires_utc:(long long)arg0;
- (void)setIs_secure:(long long)arg0;
- (void)setIs_httponly:(long long)arg0;
- (void)setLast_access_utc:(long long)arg0;
- (void)setHas_expires:(long long)arg0;
- (void)setIs_persistent:(long long)arg0;
- (BOOL)isExpires;
- (long long)expires_utc;
- (long long)is_secure;
- (long long)is_httponly;
- (long long)is_persistent;
- (id)convertToCookie;
- (long long)creation_utc;
- (long long)last_access_utc;
- (long long)has_expires;
- (void)setPath:(id)arg0;
- (void).cxx_destruct;
- (id)value;
- (id)path;
- (id)domain;
- (void)setName:(id)arg0;
- (void)setValue:(id)arg0;
- (id)name;
- (void)setDomain:(id)arg0;

@end
