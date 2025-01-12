//
//     Generated by private class-dump
//

@class NSData, NSString;

@interface GPMutipartFormData : NSObject {
    NSData *_data;
    NSString *_name;
    NSString *_fileName;
    NSString *_mimeType;
}

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *mimeType;

- (id)initWithData:(id)arg0 name:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3;
- (id)data;
- (id)mimeType;
- (void).cxx_destruct;
- (id)fileName;
- (void)setData:(id)arg0;
- (void)setFileName:(id)arg0;
- (void)setMimeType:(id)arg0;
- (void)setName:(id)arg0;
- (id)name;

@end
