//
//     Generated by private class-dump
//

@class NSError;

@interface RACEvent : NSObject <NSCopying> {
    unsigned long long _eventType;
    id _object;
}

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) id value;

+ (id)completedEvent;
+ (id)eventWithValue:(id)arg0;
+ (id)eventWithError:(id)arg0;

- (id)initWithEventType:(unsigned long long)arg0 object:(id)arg1;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (id)value;
- (unsigned long long)eventType;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)object;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)error;

@end
