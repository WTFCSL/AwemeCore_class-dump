//
//     Generated by private class-dump
//

@class QQApiMiniProgramObject, QQApiObject, ArkObject;

@interface QQApiMessage : NSObject {
    unsigned long long _type;
    QQApiObject *_object;
    BOOL _isSupportArk;
    ArkObject *_arkObject;
    QQApiMiniProgramObject *_miniObject;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) QQApiObject *object;
@property (retain, nonatomic) ArkObject *arkObject;
@property (nonatomic) BOOL isSupportArk;
@property (retain, nonatomic) QQApiMiniProgramObject *miniObject;

+ (id)messageWithObject:(id)arg0 andType:(unsigned long long)arg1;
+ (id)messageWithArkObject:(id)arg0 andType:(unsigned long long)arg1;
+ (id)messageWithMiniObject:(id)arg0 andType:(unsigned long long)arg1;
+ (id)messageWithObject:(id)arg0;

- (void)setIsSupportArk:(BOOL)arg0;
- (void)setArkObject:(id)arg0;
- (void)setMiniObject:(id)arg0;
- (id)initWithArkObject:(id)arg0 andType:(unsigned long long)arg1;
- (id)initWithMiniObject:(id)arg0 andType:(unsigned long long)arg1;
- (BOOL)isSupportArk;
- (id)miniObject;
- (id)arkObject;
- (id)initWithObject:(id)arg0 andType:(unsigned long long)arg1;
- (unsigned long long)type;
- (id)object;
- (void)setType:(unsigned long long)arg0;
- (void)dealloc;
- (void)setObject:(id)arg0;

@end