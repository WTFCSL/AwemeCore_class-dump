//
//     Generated by private class-dump
//

@class NSMutableData;

@interface BDPMultiPartFormDataUploadDataUploadData : NSObject {
    BOOL _isFinished;
    NSMutableData *_data;
    unsigned long long _partHadSentDataLength;
}

@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic) unsigned long long partHadSentDataLength;
@property (nonatomic) BOOL isFinished;

- (void)setPartHadSentDataLength:(unsigned long long)arg0;
- (id)initWithData:(id)arg0 partHadSentDataLength:(unsigned long long)arg1 isFinished:(BOOL)arg2;
- (unsigned long long)partHadSentDataLength;
- (BOOL)isFinished;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setIsFinished:(BOOL)arg0;

@end