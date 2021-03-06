//
//  DMTestableePubFileManager.h
//  SimpleEpubReader
//
//  Created by Nikola Sobadjiev on 2/24/14.
//  Copyright (c) 2014 Nikola Sobadjiev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <zipzap/zipzap.h>
#import "DMePubFileManager.h"

@interface DMTestableePubFileManager : DMePubFileManager

@property (nonatomic) ZZArchive* archiver;
@property (nonatomic, strong) NSData* hardcodedZipData;

- (id)initWithArchiverClass:(Class)archiveClass;
- (ZZArchive*)zipArchiver;
- (NSData*)dataForZipEntry:(ZZArchiveEntry*)entry
                     error:(NSError**)error;

@end
