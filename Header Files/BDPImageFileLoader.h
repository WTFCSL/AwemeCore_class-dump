//
//     Generated by private class-dump
//

@class BDPUniqueID;

@interface BDPImageFileLoader : NSObject {
    BDPUniqueID *_uniqueID;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;

+ (id)initWithUniqueID:(id)arg0;

- (void)fetchImageForPath:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;

@end
