//
//     Generated by private class-dump
//

@class NSError;

@protocol AWERecordResourceBaseModel <NSObject>

@property (readonly, nonatomic) unsigned long long taskType;
@property (retain, nonatomic) NSError *outError;
@property (nonatomic) BOOL outSuccess;

- (id)outError;
- (BOOL)outSuccess;
- (BOOL)inputParameterIsValid;
- (void)setOutSuccess:(BOOL)arg0;
- (void)setOutError:(id)arg0;
- (unsigned long long)taskType;

@end
