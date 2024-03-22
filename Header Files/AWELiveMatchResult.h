//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveMatchResult : NSObject <IESLiveMatchResult> {
    NSString *_nickname;
    unsigned long long _userId;
    NSString *_secUid;
    NSString *_avatarUrl;
    NSString *_account;
    unsigned long long _hitType;
    struct _NSRange { unsigned long long location; unsigned long long length; } _highlightRange;
}

@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) unsigned long long userId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *account;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightRange;
@property (nonatomic) unsigned long long hitType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secUid;
- (void)setAvatarUrl:(id)arg0;
- (void)setSecUid:(id)arg0;
- (id)avatarUrl;
- (void)setHighlightRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (unsigned long long)hitType;
- (void)setHitType:(unsigned long long)arg0;
- (void)setAccount:(id)arg0;
- (id)nickname;
- (id)account;
- (void).cxx_destruct;
- (void)setNickname:(id)arg0;
- (unsigned long long)userId;
- (void)setUserId:(unsigned long long)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })highlightRange;

@end
