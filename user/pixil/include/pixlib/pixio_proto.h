/*                                                                       
 * Copyright (c) 2003 Century Software, Inc.   All Rights Reserved.     
 *                                                                       
 * This file is part of the PIXIL Operating Environment                 
 *                                                                       
 * The use, copying and distribution of this file is governed by one    
 * of two licenses, the PIXIL Commercial License, or the GNU General    
 * Public License, version 2.                                           
 *                                                                       
 * Licensees holding a valid PIXIL Commercial License may use this file 
 * in accordance with the PIXIL Commercial License Agreement provided   
 * with the Software. Others are governed under the terms of the GNU   
 * General Public License version 2.                                    
 *                                                                       
 * This file may be distributed and/or modified under the terms of the  
 * GNU General Public License version 2 as published by the Free        
 * Software Foundation and appearing in the file LICENSE.GPL included   
 * in the packaging of this file.                                      
 *                                                                       
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING  
 * THE WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A            
 * PARTICULAR PURPOSE.                                                  
 *                                                                       
 * RESTRICTED RIGHTS LEGEND                                             
 *                                                                     
 * Use, duplication, or disclosure by the government is subject to      
 * restriction as set forth in paragraph (b)(3)(b) of the Rights in     
 * Technical Data and Computer Software clause in DAR 7-104.9(a).       
 *                                                                      
 * See http://embedded.centurysoftware.com/gpl/ for GPL licensing       
 * information.                                                         
 *                                                                      
 * See http://embedded.centurysoftware.com/license.html or              
 * email cetsales@centurysoftware.com for information about the PIXIL   
 * Commercial License Agreement, or if any conditions of this licensing 
 * are not clear to you.                                                
 */


#ifndef PIXIO_PROTOS_H
#define PIXIO_PROTOS_H

#include <pixlib/pixlib.h>

typedef struct
{
    int (*sysdep_play_wav_file) (char *);
    int (*sysdep_save_wav_file) (char *, pix_io_audio_t *, unsigned char *);
    int (*sysdep_load_wav_file) (char *, pix_io_audio_t *, unsigned char *,
				 int);
    int (*sysdep_get_wav_stats) (char *, pix_io_audio_t *);
    int (*sysdep_open_stream) (int, pix_io_audio_t *);
    int (*sysdep_stream_record) (int, unsigned char *, int);
    int (*sysdep_stream_play) (int, unsigned char *, int);
    int (*sysdep_get_mixer_devices) (unsigned long *);
    int (*sysdep_get_mixer_level) (int, pix_io_level_t *);
    int (*sysdep_set_mixer_level) (int, pix_io_level_t *);
}
pix_io_functions_t;

#endif